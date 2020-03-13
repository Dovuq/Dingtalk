# 14行Dingtalk刷赞器

<h1> 这是一个危险的程序！请您在仔细阅读下面的使用说明后再下载。<h1>

## 1 概述

1. 这个程序是用来给 Dingtalk 直播刷赞的连点器。
1. 此程序仅限在 Windows 7 及以上的计算机使用。Mac OS 和 Linux 不能使用。
1. 上面的源代码不能直接使用，而需要看下面的使用规则。
1. 若您在使用或理解时遇到任何问题，可以联系 xrdrsp@outlook.com。

## 2 使用规则

1. 您在下载上面的源代码 `ding.cpp` 后，先用文本编辑器打开它。（C++ IDE 当然更好）
1. **注意到第 6 行 `SetCursorPos(x, y);` 中的 `x`、`y` 是需要改动的。** 它们是一组坐标，指向您的计算机上钉钉直播的点赞位置。如在我的计算机上，点赞的坐标为 `(1380, 600)`，则我应该把第 6 行设置为 `SetCursorPos(1380, 600)`。点赞的坐标需要您们自己找到。
1. 这之后，您需要注意到第 7 行 `int t = 10000;`，这里的 `10000` 是可以改变的，它代表着您要点赞的次数。**注意：这个值不能太大，必须介于 0 和 2147483647 间，且越小越好，否则您的计算机可能炸掉**。（建议最多 10000）
1. 完成了之前的 3 步后，您就可以运行了！如果您没有编译器，建议您下载 DEV-C++ 后编译并运行它。（具体可以搜教程。）

## 3 协议
1. 本程序不保证安全，所以您在运行程序的时候千万不要移动您的鼠标。
1. 中途要退出请把鼠标移到安全位置。
1. 您在使用此程序前应该具有一些计算机基本知识，并尽量理解程序的意思。
1. 由您自己的问题造成的损失，本人不承担责任。
1. 本人对此 Repository 和程序有最终的解释权。

# 4 广告

征集 Mac OS 和 Linux 下的 Dingtalk 连点器。万分感谢。
