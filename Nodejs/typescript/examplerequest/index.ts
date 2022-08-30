import axios from 'axios';



const url = 'https://jsonplaceholder.typicode.com/todos/1';


interface Res {
	id: number;
	title: string;
	completed: boolean;
}


axios.get(url).then(response => {
	console.log(response.data);

	const res = response.data as Res;


	const id = res.id;
	const title = res.title;
	const completed = res.completed;


	console.log(`
		    id is: ${id}
		    title is: ${title}
		    completed is: ${completed}
		    `);

	logRes(id, title, completed);
});


const logRes = (id: number, title: string, completed: boolean) => {
	console.log(`
		    id is: ${id}
		    title is: ${title}
		    finished is: ${completed}
		    `);
};


class Color {
}

const red: Color = new Color();


const appleCount: number = 2;



const orangeCount: number = 2;


let now: Date = new Date();

console.log(now)


let colors: string[] = ['red','blue','green'];
let numbers: number[] = [1,2,3];

console.log(colors)
console.log(numbers)



// Object literal  

let cordinates: { x: number; y: number } = {
	x: 10,
	y: 20
}

console.log(cordinates)

console.log(JSON.parse("false"))
console.log(JSON.parse("122"))


const add = (a: number, b: number): number => {
	return a+b;
}


const voidLogger = (message: string): void => {
	console.log(message);
}

voidLogger('hello')


const throwError = (message: string): never => {
	throw new Error(message);
}

//throwError("h")



// Destructuring with annotations  

 


// tuples  

const water: [string, boolean, number] = ["white",true,4]

// or create type alias

type Car = [string, boolean, number]

const car1: Car = ['brown', true, 40]

console.log(water)
console.log(car1)




// class


class Vehicle {
	drive(): void {
		console.log('helllloo..')
	}

	beep(): void {
		console.log('bbeepp');
	}
}

const vehicle1 = new Vehicle();
vehicle1.drive();
vehicle1.beep();



class Bike extends Vehicle {

	drive(): void {
		console.log('bikkee drive')
	}

}

const bike1 = new Bike();

bike1.drive();
bike1.beep();



// how make use of classes in a basic application  
// and how to get some code reuse with them through
// the use of interfaces




// Type definition files  
// these files are already publicaly available  

// @types/{library name}