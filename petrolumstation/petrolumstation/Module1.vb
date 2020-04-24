
Imports System.Data.SqlClient
Module Module1
    Public con As New SqlConnection(" Data Source=HP-PC\SQLEXPRESS;Initial Catalog=petrolum;Integrated Security=True ")
    Public cmd As New SqlCommand
    Public dr As SqlDataReader
End Module
