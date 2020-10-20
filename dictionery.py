days = {
    "s":"sunday",
    "m":"monday",
    "t":"tuesday",
    "w":"wednesday",
    "th":"thursday",
    "f":"friday",
    "sa":"saturday",
}
day = "q"
print(days.get(day,"fatal Error"))

days = dict(
    s="sunday",
    m="monday",
    t="tuesday",
    w="wednesday",
    th="thursday",
    f="friday",
    sa="saturday",
)
day = "s"
print(days.get(day,"fatal Error"))