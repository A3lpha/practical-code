Imports System.Data.SqlClient
Public Class attendence_form
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        con.Open()
        cmd.Connection = con
        cmd.CommandType = CommandType.Text
        cmd.CommandText = "insert into Attendence values (@id , @day , @mounth , @year , @status)"
        cmd.Parameters.AddWithValue("@id", ComboBox1.Text)
        cmd.Parameters.AddWithValue("@day", txtday.Text)
        cmd.Parameters.AddWithValue("@mounth", txtmounth.Text)
        cmd.Parameters.AddWithValue("@year", txtyear.Text)
        cmd.Parameters.AddWithValue("@status", ComboBox2.Text)
        cmd.ExecuteNonQuery()
        con.Close()
        MsgBox("Data succsesfuly saved!!")
    End Sub

    Sub fillusername()
        con.Open()
        cmd.Connection = con
        cmd.CommandType = CommandType.Text
        cmd.CommandText = "select id from employee"
        dr = cmd.ExecuteReader
        While dr.Read
            ComboBox1.Items.Add(dr(0).ToString)

        End While
        con.Close()
    End Sub

    Private Sub attendence_form_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        fillusername()
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        End
    End Sub
End Class