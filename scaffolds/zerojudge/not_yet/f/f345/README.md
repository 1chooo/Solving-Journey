# [f345. 新手練習題—陣列](https://zerojudge.tw/ShowProblem?problemid=f345)

本題是給新手練習陣列使用的（其實是出給學弟妹練習陣列用的）。  
題目很簡單，給你一堆數字，只要將它們的順序倒過來輸出就可以了。

| Sample | Input | Output |
| :------: | :--------: | :------: |
| 說明 | 每個測資點僅單筆輸入。<br>第一行有一個正整數N，表示接下來有N個數字。（N<=10^6）<br>第二行有N個數字Pi。（Pi的大小在int變數型別的範圍內，也就是-2147483648~2147483647） | 請將輸入的N個數字順序顛倒後輸出並以空白隔開。 |
| # 1 | 5<br>1 2 3 4 5 | 5 4 3 2 1 |
| # 2 | 4<br>100 250 -200 450 | 450 -200 250 100 |

- 測資資訊：
  - 記憶體限制： 512 MB
  - 公開 測資點#0 (11%): 10.0s , <1K
  - 公開 測資點#1 (11%): 10.0s , <1K
  - 公開 測資點#2 (11%): 10.0s , <1M
  - 公開 測資點#3 (11%): 10.0s , <1M
  - 公開 測資點#4 (11%): 10.0s , <1M
  - 公開 測資點#5 (11%): 10.0s , <1M
  - 公開 測資點#6 (11%): 10.0s , <1M
  - 公開 測資點#7 (11%): 10.0s , <50M
  - 公開 測資點#8 (12%): 10.0s , <50M

> Hint ：
> 可以使用 `<algorithm>` 函式庫裡面的 reverse 把陣列內容反轉後輸出；也可以直接從陣列的尾端跑到首端逐一輸出；也歡迎高手直接調整 stdin 的存取位置來解題！

### [Python 解]
```py
n = int(input())
a = [int(x) for x in input().split()]
# a = list(map(int, input().split()))

for i in a[::-1]:
    print(i, end=" ")

print()
```