function PrintObjectsWithPartialName(objectName)
    local Objects = engine.Objects
    for i=0,(Objects.Count-1) do
        local obj = Objects[i]
        if obj == nil then goto continue end
        if string.match(obj:GetFullName(), objectName) then
            print(obj:GetFullName())
        end

        ::continue::
    end
end

function PrintObjectsWithClass(class)
    local Objects = engine.Objects
    for i=0,(Objects.Count-1) do
        local obj = Objects[i]
        if obj == nil then goto continue end
        if not obj:IsA(class) then goto continue end
        print(obj:GetFullName())

        ::continue::
    end
end