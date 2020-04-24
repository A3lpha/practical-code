Imports System.Data.SqlClient
Public Class User_form

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        con.Open()
        cmd.Connection = con
        cmd.CommandType = CommandType.Text
        cmd.CommandText = "select  case when max(ID) is null then 1 else max(ID)+1 end from users"
        Dim a As Integer = cmd.ExecuteScalar
        txtid.Text = a
        con.Close()
        txtname.Focus()
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        con.Open()
        cmd.Connection = con
        cmd.CommandType = CommandType.Text
        cmd.CommandText = "insert into users values (@id , @name , @pass , @tybe)"
        cmd.Parameters.AddWithValue("@id", txtid.Text)
        cmd.Parameters.AddWithValue("@name", txtname.Text)
        cmd.Parameters.AddWithValue("@pass", txtpassword.Text)
        cmd.Parameters.AddWithValue("@tybe", txttybe.Text)
        cmd.ExecuteNonQuery()
        con.Close()
        MsgBox("Data succsesfuly saved!!")
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        End
    End Sub
End Class