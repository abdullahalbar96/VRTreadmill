using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO.Ports;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Threading;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        private static SerialPort serialPort1 = new SerialPort();
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
          
        }
        
        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
        bool workingState = false;
        private void button2_Click(object sender, EventArgs e)
        {
            if (workingState)
            {
                workingState = false;
                button2.Text = "Start";
                // serialPort1.Close();
                ReadingCondition = false;
                
            }
            else
            {
                workingState = true;
                button2.Text = "Stop";
                ReadingCondition = true;
                Thread readFromSerialThread = new Thread(new ThreadStart(readThread));
                readFromSerialThread.Start();



            }
        }
        private static bool ReadingCondition=false;
        
        static void readThread()
        {
            
            while (ReadingCondition)
            {
               MessageBox.Show(serialPort1.ReadLine().ToString());
                try
                {
                    if (serialPort1.ReadLine().ToString().Contains("w"))
                    {

                        SendKeys.Send("w");
                    }
                    if (serialPort1.ReadLine().ToString().Contains("a"))
                    {
                        SendKeys.Send("a");
                    }
                    if (serialPort1.ReadLine().ToString().Contains("d"))
                    {
                        SendKeys.Send("d");
                    }
                    if (serialPort1.ReadLine().ToString().Contains("s"))
                    {
                        SendKeys.Send("s");
                    }
                }
                catch
                {
                    MessageBox.Show("");
                }
            }
        }
       
        private void button1_Click(object sender, EventArgs e)
        {

            serialPort1.PortName = comboBox1.Text;
            serialPort1.BaudRate = 9600;
            try
            {
                serialPort1.Open();
                button1.Enabled = false;
                button2.Enabled = true;
            }
            catch
            {
                MessageBox.Show("An error occured while trying to open the serialPort " + comboBox1.SelectedText);
            }
            
        }
    }
}
