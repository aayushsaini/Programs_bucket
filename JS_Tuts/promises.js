
const prom = new Promise( (resolve, reject) => {

    setTimeout( () => {
        let rollNo = [1,2,3,4,5,6];
        if (rollNo.length >5){
            resolve(rollNo);
        } else{
            reject("\nYikes! Something went wrong...");
        }
    }, 2000);

});

const getBioData = (roll) => {
    return new Promise( (resolve, reject) => {
        setTimeout( (roll) => {
            let bioData = {
                name: "Aayush Saini",
                edu: "MCA",
                age: 22
            };
            // resolve(`My name is ${bioData.name} and I am ${bioData.age} years old & my roll no. is ${roll[0]}`)
            reject(`Could not resolve`);
        }, 2000, roll);
    } );
};


// prom.then( (output) => {
//     console.log(output);
//     getBioData(output).then( (op)=> {
//         console.log(op);
//     }).catch( (err) => {
//         console.log(err);
//     });
// }).catch( (err) => {
//     console.log(err);
// });

async function getData() {
    try{
        const getRoll = await prom;
        // console.log(getRoll);
        const getBio = await getBioData(getRoll);
        // console.log(getBio);
        return getBios;
    } catch(err){
        return err;
    }
}

const getDetails = getData().then( (data) => {
    console.log(data);
}).catch( (err) => {
    console.log(`Got some error, Error: ${err}`);
});