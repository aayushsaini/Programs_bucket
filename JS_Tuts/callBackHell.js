const getRollNo = () => {
    setTimeout( ()=> {
            console.log("Getting data...");
            let roll_no = [1,2,3,4,5];
            let user = {
                name: "Aayush",
                gender: "Male",
                edu: "MCA"
            };
            console.log(roll_no);

            setTimeout( (rno) => {
                console.log(`Picked up roll: ${rno} for ${user.name}.`)
                console.log(`Getting gender info...`);
                
                setTimeout( (gender) => {

                    console.log(`${user.name} is a ${gender}`)
                
                }, 2000, "Male");

            }, 2000, roll_no[2]);
    }, 2000);
}

console.log("\nStarted...");
getRollNo();
console.log("Request sent!");