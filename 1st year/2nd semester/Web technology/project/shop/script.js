document.addEventListener("DOMContentLoaded", displayProducts);

function getProducts() {
    return JSON.parse(localStorage.getItem("products")) || [];
}

function saveProducts(products) {
    localStorage.setItem("products", JSON.stringify(products));
}

function addProduct() {
    let name = document.getElementById("productName").value.trim();
    let quantity = parseInt(document.getElementById("productQuantity").value);
    let price = parseFloat(document.getElementById("productPrice").value);

    if (!name || isNaN(quantity) || isNaN(price)) {
        alert("Please enter valid product details!");
        return;
    }

    let products = getProducts();
    let existingProduct = products.find(p => p.name === name);

    if (existingProduct) {
        alert("Product already exists! Use 'Import Stock' to add more.");
    } else {
        products.push({ name, quantity, price });
        saveProducts(products);
        alert("Product added successfully!");
    }

    displayProducts();
}

function importStock() {
    let name = document.getElementById("importName").value.trim();
    let quantity = parseInt(document.getElementById("importQuantity").value);

    if (!name || isNaN(quantity)) {
        alert("Enter valid details!");
        return;
    }

    let products = getProducts();
    let product = products.find(p => p.name === name);

    if (product) {
        product.quantity += quantity;
        saveProducts(products);
        alert("Stock imported successfully!");
    } else {
        alert("Product not found!");
    }

    displayProducts();
}

function sellProduct() {
    let name = document.getElementById("sellName").value.trim();
    let quantity = parseInt(document.getElementById("sellQuantity").value);

    if (!name || isNaN(quantity)) {
        alert("Enter valid details!");
        return;
    }

    let products = getProducts();
    let product = products.find(p => p.name === name);

    if (product) {
        if (product.quantity >= quantity) {
            product.quantity -= quantity;
            saveProducts(products);
            alert("Product sold successfully!");
        } else {
            alert("Not enough stock!");
        }
    } else {
        alert("Product not found!");
    }

    displayProducts();
}

function displayProducts() {
    let products = getProducts();
    let table = document.getElementById("productTable");
    table.innerHTML = "";

    products.forEach(p => {
        let row = `<tr>
            <td>${p.name}</td>
            <td>${p.quantity}</td>
            <td>$${p.price.toFixed(2)}</td>
        </tr>`;
        table.innerHTML += row;
    });
}
