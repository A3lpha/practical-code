Imports System.Data.SqlClient
Public Class Product_form

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        con.Open()
        cmd.Connection = con
        cmd.CommandType = CommandType.Text
        cmd.CommandText = "select  case when max(ID) is null then 1 else max(ID)+1 end from product"
        Dim a As Integer = cmd.ExecuteScalar
        txtid.Text = a
        con.Close()
        txtname.Focus()
    End Sub
    Sub clear()
        txtid.Clear()
        txtname.Clear()
        txtdescribtion.Clear()
        txtprice.Clear()
        txtunit.Clear()

    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        End
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        con.Open()
        cmd.Connection = con
        cmd.CommandType = CommandType.Text
        cmd.CommandText = "insert into product values (@id , @name , @des , @price , @unit)"
        cmd.Parameters.AddWithValue("@id", txtid.Text)
        cmd.Parameters.AddWithValue("@name", txtname.Text)
        cmd.Parameters.AddWithValue("@des", txtdescribtion.Text)
        cmd.Parameters.AddWithValue("@price", txtprice.Text)
        cmd.Parameters.AddWithValue("@unit", txtunit.Text)
        cmd.ExecuteNonQuery()
        txtid.Refresh()
        con.Close()
        MsgBox("Data succsesfuly saved!!")
        clear()

    End Sub
End Class