Imports System.Data.SqlClient
Public Class Customer_sales

    Private Sub TextBox4_TextChanged(sender As Object, e As EventArgs) Handles txtprice.TextChanged

    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        con.Open()
        cmd.Connection = con
        cmd.CommandType = CommandType.Text
        cmd.CommandText = "insert into customer sales values (@id , @name , @customername , @price , @total , @date)"
        cmd.Parameters.AddWithValue("@id", ComboBox1.Text)
        cmd.Parameters.AddWithValue("@name", ComboBox2.Text)
        cmd.Parameters.AddWithValue("@customername", txtcustomername.Text)
        cmd.Parameters.AddWithValue("@price", txtprice.Text)
        cmd.Parameters.AddWithValue("@total", txttotal.Text)
        cmd.Parameters.AddWithValue("@date", DateTimePicker1.Text)
        cmd.ExecuteNonQuery()
        con.Close()
        MsgBox("Data succsesfuly saved!!")
    End Sub
    Sub fillproductdata()
        con.Open()
        cmd.Connection = con
        cmd.CommandType = CommandType.Text
        cmd.CommandText = "select id from product"
        dr = cmd.ExecuteReader
        While dr.Read
            ComboBox1.Items.Add(dr(0).ToString)
        End While
        con.Close()
    End Sub
    Sub fillproductname()
        ComboBox2.Items.Clear()
        con.Open()
        cmd.Connection = con
        cmd.CommandType = CommandType.Text
        cmd.CommandText = "select * from product"
        dr = cmd.ExecuteReader
        While dr.Read
            ComboBox2.Items.Add(dr(1))
        End While
        con.Close()
    End Sub

    Private Sub Customer_sales_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        fillproductdata()
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        End
    End Sub

    Private Sub ComboBox1_SelectedIndexChanged(sender As Object, e As EventArgs) Handles ComboBox1.SelectedIndexChanged, ComboBox2.SelectedIndexChanged
        fillproductname()
    End Sub

    Private Sub Label1_Click(sender As Object, e As EventArgs) Handles Label1.Click

    End Sub
End Class