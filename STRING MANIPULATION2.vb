Module Module1

    Sub Main()
        Dim str1, str2 As String
        Dim chartoremove, currentcharacter As Char
        Dim counter As Integer

        str1 = ""
        str2 = ""
        chartoremove = ""
        currentcharacter = ""
        counter = 0

        Console.Write("Enter The String to Manipulate : ")
        str1 = Console.ReadLine

        Console.Write("Enter The Character To Be Removed: ")
        chartoremove = Console.ReadLine

        For counter = 1 To Len(str1)
            currentcharacter = Mid(str1, counter, 1)
            If currentcharacter <> chartoremove Then
                str2 = str2 & currentcharacter
            End If

        Next

        Console.Write("Resulting String is : " & str2)
        Console.ReadKey()

    End Sub

End Module
