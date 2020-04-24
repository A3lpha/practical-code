Imports System.dada.sqlc
Public Class loging_form

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        con.Open()
        cmd.Connection = con
        cmd.CommandType = CommandType.Text
        cmd.CommandText = "select * from Users where Name = '" & txtusername.Text & "'" & "and password = '" & txtpassword.Text & "'"
        dr = cmd.ExecuteReader
        If dr.Read() Then
            form_MDI.Show()
            Me.Hide()
            con.Close()
        Else
            MsgBox("Your User Name Or Password is inccorect plz try agin")
            txtusername.Text = ("")
            txtpassword.Text = ("")
            txtusername.Focus()
            con.Close()
        End If
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        End
    End Sub
End Class