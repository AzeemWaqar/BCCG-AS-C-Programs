Module Module1

    Sub Main()
        Dim str1, Finalstr, part2, part1, str2 As String
        Dim SpacePos As Integer

        str1 = ""
        str2 = ""
        part1 = ""

        Finalstr = ""
        SpacePos = 0

        Console.Write("Enter the First String : ")
        str1 = Console.ReadLine

        Console.Write("Enter the Second String : ")
        str2 = Console.ReadLine

        SpacePos = InStr(str1, " ")
        part1 = Left(str1, SpacePos)

        SpacePos = InStr(str2, " ")
        part2 = Right(str2, Len(str2) - SpacePos)

        Finalstr = part1 & part2
        Console.Write(Finalstr)
        Console.ReadKey()

    End Sub

End Module