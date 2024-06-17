set BASE_URL env("asdf")

let asdf = read("asdf")

post "http://localhost" {
  header "Authorization" escape_new_lines("asdf\n")
  body ""
  // asdfa
}
