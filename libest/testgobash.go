package main

import (
	"fmt"
	"os/exec"
)

func main() {
	cmd := exec.Command("/Users/tonyblake/Desktop/marbles/libest/generateCerts.sh").Output()
	output, err := cmd.CombinedOutput()
	if err != nil {
		fmt.Println(fmt.Sprint(err) + ": " + string(output))
		return
	} else {
		fmt.Println(string(output))
	}

}
