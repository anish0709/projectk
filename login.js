function validate() {
  var username = document.getElementById("username").value;
  var password = document.getElementById("password").value;
  if (username == "admin" && password == "user") {
    alert("login succesfully");
    window.open("https://www.youtube.com/watch?v=PkxA6m-NNCY");
  } else {
    alert("login failed");
  }
}
