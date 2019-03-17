local ffi = require("ffi")
local engine = engine

engine.LoadPackage("GD_Assassin_Streaming_SF")
engine.LoadPackage("GD_Mercenary_Streaming_SF")
engine.LoadPackage("GD_Siren_Streaming_SF")
engine.LoadPackage("GD_Lilac_Psycho_Streaming_SF")
engine.LoadPackage("GD_Tulip_Mechro_Streaming_SF")
engine.LoadPackage("GD_Soldier_Streaming_SF")


local function GetTableCount(tab)
    local count = 0
    for k,v in ipairs(tab) do
        count = count + 1
    end
    return count
end

local function FindObjectsByPartial(objectName, underscores_in_final)
	local matching_objects = {}
    local Objects = engine.Objects
	for i=0,(Objects.Count-1) do
		local obj = Objects[i]
		if obj == nil then goto continue end
		if string.match(obj:GetFullName(), objectName) and string.match(obj:GetFullName(), "_Skills")then
	        local t={}
	        for str in string.gmatch(obj:GetFullName(), "([^.]+)") do
                table.insert(t, str)
	        end
	        c = GetTableCount(t)
	        if c > 1 then
	        	local _, count_first = string.gsub(t[1], "_", "")
				local _, count_last = string.gsub(t[c], "_", "")
				if count_first > 1 and count_last == underscores_in_final then
					table.insert(matching_objects, ffi.cast("struct U" .. objectName .. "*", obj))
				end
			end
		end

		::continue::
	end
	return matching_objects
end



local skill_classes = {
	GD_Assassin_Skills= {},
	GD_Mercenary_Skills= {},
	GD_Siren_Skills= {},
	GD_Lilac_Psycho_Skills= {},
	GD_Tulip_Mechromancer_Skills= {},
	GD_Soldier_Skills= {}
}

local branches_definitions = FindObjectsByPartial("SkillTreeBranchDefinition", 1)


function randomizeSkills()
	skill_definitions = FindObjectsByPartial("SkillDefinition", 0)

	for _,branch in pairs(branches_definitions) do
		for _,tier in pairs(branch.Tiers) do
			for i,skill in pairs(tier.Skills) do
				pos = math.random(#skill_definitions)
				tier.Skills.Data[i] = skill_definitions[pos]
				table.remove(skill_definitions, pos)
			end
		end
	end
end