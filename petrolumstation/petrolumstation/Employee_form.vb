Public Class Employee_form

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        con.Open()
        cmd.Connection = con
        cmd.CommandType = CommandType.Text
        cmd.CommandText = "select  case when max(ID) is null then 1 else max(ID)+1 end from employee"
        Dim a As Integer = cmd.ExecuteScalar
        txtid.Text = a
        con.Close()
        txtname.Focus()
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        con.Open()
        cmd.Connection = con
        cmd.CommandType = CommandType.Text
        cmd.CommandText = "insert into employee values (@id , @name , @addres , @phone , @qualification , @gender , @job , @salary , @date)"
        cmd.Parameters.AddWithValue("@id", txtid.Text)
        cmd.Parameters.AddWithValue("@name", txtname.Text)
        cmd.Parameters.AddWithValue("@addres", txtaddres.Text)
        cmd.Parameters.AddWithValue("@phone", txtphone.Text)
        cmd.Parameters.AddWithValue("@qualification", txtqualification.Text)
        cmd.Parameters.AddWithValue("@gender", cbogender.Text)
        cmd.Parameters.AddWithValue("@job", cbojob.Text)
        cmd.Parameters.AddWithValue("@salary", txtsalary.Text)
        cmd.Parameters.AddWithValue("@date", DateTimePicker1.Text)
        cmd.ExecuteNonQuery()
        con.Close()
        datagardeview()
        MsgBox("Data succsesfuly saved!!")
    End Sub
    Sub datagardeview()
        con.Open()
        cmd.Connection = con
        cmd.CommandType = CommandType.Text
        cmd.CommandText = "select * from employee"
        dr = cmd.ExecuteReader
        Dim dt As New DataTable
        dt.Load(dr)
        DataGridView1.AutoGenerateColumns = True
        DataGridView1.DataSource = dt
        DataGridView1.Refresh()
        con.Close()
    End Sub

    Private Sub Employee_form_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        datagardeview()
    End Sub
End Class