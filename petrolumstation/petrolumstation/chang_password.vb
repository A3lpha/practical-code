Imports System.Data.SqlClient
modale modale1 
Public Class chang_password

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        If txtnwe.Text = txtconfirm.Text Then
            con.Open()
            cmd.Connection = con
            cmd.CommandType = CommandType.Text
            cmd.CommandText = "update users set password ='" & txtnwe.Text & "'" & " where name ='" & ComboBox1.Text & "'" & " and password = '" & txtold.Text & "'"
            cmd.ExecuteNonQuery()
            con.Close()
            MsgBox(" Password is successfuly changed....!!!")
        Else
            MsgBox("Your new Password is not matching....!!!")
            ComboBox1.SelectedIndex = -1
            txtnwe.Text = ""
            txtold.Text = ""
            txtconfirm.Text = ""
        End If
    End Sub
    Sub fillusername()
        con.Open()
        cmd.Connection = con
        cmd.CommandType = CommandType.Text
        cmd.CommandText = "select name from users"
        dr = cmd.ExecuteReader
        While dr.Read
            ComboBox1.Items.Add(dr(0).ToString)
        End While
        con.Close()
    End Sub

    Private Sub chang_password_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        fillusername()
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        End
    End Sub
End Class