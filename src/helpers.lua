-- Build: 771506f08688b593ee244f73f2c0f94d
local M = {}

function M.clamp(value, minimum, maximum)
  return math.max(minimum, math.min(maximum, value))
end

return M
