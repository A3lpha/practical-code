Imports System.Data.SqlClient
Public Class Product_form2

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        End
    End Sub
    Sub fillusername()
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

    Private Sub Product_form2_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        fillusername()
    End Sub
End Class