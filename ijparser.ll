
define i32 @main(i32 %args.tam, i8** %args) {
  entry:
    %args.length = alloca i32
    %0 = add i32 %args.tam, -1
    store i32 %0, i32* %args.length

    %a = alloca i1
    %b = alloca i32*
    %b.length = alloca i32
    %c = alloca i1*
    %c.length = alloca i32

    %1 = add i1 0, 0
    %2 = getelementptr i1* %a, i32 0
    store i1 %1, i1* %2

    %3 = add i32 3, 0
    %4 = call noalias i8* @malloc(i32 %3)
    %5 = bitcast i8* %4 to i32*
    store i32* %5, i32** %b
    store i32 %3, i32* %b.length

    %6 = add i32 2, 0
    %7 = call noalias i8* @malloc(i32 %6)
    %8 = bitcast i8* %7 to i1*
    store i1* %8, i1** %c
    store i32 %6, i32* %c.length

    %9 = add i32 2, 0
    %10 = add i32 3, 0
    %11 = load i32** %b
    %12 = getelementptr i32* %11, i32 %10
    store i32 %9, i32* %12

    %13 = add i1 0, 0
    %14 = add i32 1, 0
    %15 = load i1** %c
    %16 = getelementptr i1* %15, i32 %14
    store i1 %13, i1* %16

    %17 = add i32 3, 0
    %18 = load i32** %b
    %19 = getelementptr i32* %18, i32 %17
    %20 = load i32* %19
    %21 = getelementptr [4 x i8]* @str.int, i32 0, i32 0
    %22 = call i32 (i8*, ...)* @printf( i8* %21, i32 %20)

    %23 = add i32 1, 0
    %24 = load i1** %c
    %25 = getelementptr i1* %24, i32 %23
    %26 = load i1* %25
    %27 = icmp eq i1 %26, 0
    br i1 %27, label %then0, label %else0

  then0:
    %28 = getelementptr [7 x i8]* @str.false, i32 0, i32 0
    %29 = call i32 (i8*, ...)* @printf( i8* %28)
    br label %ifcont0

  else0:
    %30 = getelementptr [6 x i8]* @str.true, i32 0, i32 0
    %31 = call i32 (i8*, ...)* @printf( i8* %30)
    br label %ifcont0

  ifcont0:

    %32 = load i32* %b.length
    %33 = getelementptr [4 x i8]* @str.int, i32 0, i32 0
    %34 = call i32 (i8*, ...)* @printf( i8* %33, i32 %32)

    %35 = load i32* %c.length
    %36 = getelementptr [4 x i8]* @str.int, i32 0, i32 0
    %37 = call i32 (i8*, ...)* @printf( i8* %36, i32 %35)

    %38 = add i32 0, 0
    %39 = add i32 %38, 1
    %40 = getelementptr i8** %args, i32 %39
    %41 = load i8** %40
    %42 = call i32 (i8*)* @atoi(i8* %41)
    %43 = getelementptr [4 x i8]* @str.int, i32 0, i32 0
    %44 = call i32 (i8*, ...)* @printf( i8* %43, i32 %42)

    %45 = add i32 1, 0
    %46 = add i32 %45, 1
    %47 = getelementptr i8** %args, i32 %46
    %48 = load i8** %47
    %49 = call i32 (i8*)* @atoi(i8* %48)
    %50 = getelementptr [4 x i8]* @str.int, i32 0, i32 0
    %51 = call i32 (i8*, ...)* @printf( i8* %50, i32 %49)

    %52 = add i1 0, 0
    %53 = alloca i1    %54 = icmp eq i1 %52, 1
    br i1 %54, label %then1, label %else1

  then1:
    %55 = add i1 1, 0
    %56 = add i1 %55, 0
    store i1 %56, i1* %53
    br label %ifcont1

  else1:
    %57 = add i1 %52, 0
    store i1 %57, i1* %53
    br label %ifcont1

  ifcont1:
    %58 = load i1* %53    %59 = add i1 0, 0
    %60 = alloca i1    %61 = icmp eq i1 %59, 1
    br i1 %61, label %then2, label %else2

  then2:
    %62 = add i1 1, 0
    %63 = add i1 %62, 0
    store i1 %63, i1* %60
    br label %ifcont2

  else2:
    %64 = add i1 %59, 0
    store i1 %64, i1* %60
    br label %ifcont2

  ifcont2:
    %65 = load i1* %60    %66 = call i1 @a(i1 %65)
    %67 = icmp eq i1 %66, 0
    br i1 %67, label %then3, label %else3

  then3:
    %68 = getelementptr [7 x i8]* @str.false, i32 0, i32 0
    %69 = call i32 (i8*, ...)* @printf( i8* %68)
    br label %ifcont3

  else3:
    %70 = getelementptr [6 x i8]* @str.true, i32 0, i32 0
    %71 = call i32 (i8*, ...)* @printf( i8* %70)
    br label %ifcont3

  ifcont3:

    %72 = add i32 1, 0
    ret i32 %72
}


define i1 @a(i1 %y.temp) {
  entry:
    %y = alloca i1
    store i1 %y.temp, i1* %y

    %0 = load i1* %y
    %1 = add i1 %0, 0
    ret i1 %1
}


declare i32 @atoi(i8*)
declare noalias i8* @malloc(i32)
declare i32 @printf(i8*, ...) nounwind
@str.int = internal constant [4 x i8] c"%d\0A\00"
@str.true = private unnamed_addr constant [6 x i8] c"true\0A\00"
@str.false = private unnamed_addr constant [7 x i8] c"false\0A\00"
