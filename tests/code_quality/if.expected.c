/*
	Package main - transpiled by c4go version: v0.21.7 Zinc 2018-02-08

	If you have found any issues, please raise an issue at:
	https://github.com/Konstantin8105/c4go/
*/

package code_quality

// if_1 - transpiled function from  tests/code_quality/if.c:1
func if_1() {
	var a int = 5
	var b int = 2
	var c int = 4
	if a > b {
		return
	} else if c <= a {
		a = 0
	}
	_ = (a)
	_ = (b)
	_ = (c)
}
func init() {
}
