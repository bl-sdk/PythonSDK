function math.clamp(value, min, max)
	if value < min then return min end
	if value > max then return max end
	return value
end
