function Update()
	if SKIN:GetMeasure('CurPos.X') ~= nil then
		PosX = (SKIN:GetMeasure('CurPos.X')):GetValue()
		PosY = (SKIN:GetMeasure('CurPos.Y')):GetValue()
	else
		PosX = SKIN:GetVariable('Ctx.LastX')
		PosY = SKIN:GetVariable('Ctx.LastY')
	end
	-- if SKIN:GetMeasure('mToggle') ~= nil then print(SKIN:GetMeasure('mToggle')) else print('no') end
	CtxH = (SKIN:GetMeasure('Ctx.H:eX')):GetValue()
	CtxW = (SKIN:ReplaceVariables(SKIN:GetVariable('Ctx.W')))
	ScrnH = tonumber(SKIN:GetVariable('SCREENAREAHEIGHT', -1))
	if (PosX and (PosY + CtxH) < ScrnH) then
		moveX = PosX
		moveY = PosY
		-- quad 1, 2
	elseif (PosX and (PosY + CtxH) > ScrnH) then
		moveX = PosX
		moveY = PosY - CtxH
		-- quad 3, 4
	else
		error("Invalid Operation")
	end
	SKIN:MoveWindow(moveX, moveY)
	SKIN:Bang('[!CommandMeasure SlideAnimation "importPosition('..moveX..', '..moveY..')"][!CommandMeasure ActionTimer "Execute 1"]')
end

function OpenSub(handlerName, subMenuName)
	local handler = SKIN:GetMeter(handlerName)
	local SubX = moveX + 260 * tonumber(SKIN:GetVariable('SCREENAREAWIDTH')) / 1920
	local SubY = handler:GetY() + SKIN:GetY()
	SKIN:Bang('[!DisableMeasure mToggle][!WriteKeyvalue Variables Sec.Skin '..SKIN:GetVariable('Ctx.Parent')..' "#ROOTCONFIGPATH#Ctx\\Submenu\\'..subMenuName..'.ini"][!WriteKeyvalue Variables Ctx.LastX '..SubX..' "#ROOTCONFIGPATH#Ctx\\Submenu\\'..subMenuName..'.ini"][!WriteKeyvalue Variables Ctx.LastY '..SubY..' "#ROOTCONFIGPATH#Ctx\\Submenu\\'..subMenuName..'.ini"][!ActivateConfig "#NekStart\\Ctx\\Submenu" "'..subMenuName..'.ini"]')
	SKIN:Bang('!SetVariable', 'CCW', SKIN:GetVariable('CCW'), '#NekStart\\Ctx\\Submenu')
	SKIN:Bang('!SetVariable', 'CCH', SKIN:GetVariable('CCH'), '#NekStart\\Ctx\\Submenu')
	SKIN:Bang('!SetVariable', 'SKINX', SKIN:GetVariable('SKINX'), '#NekStart\\Ctx\\Submenu')
	SKIN:Bang('!SetVariable', 'SKINY', SKIN:GetVariable('SKINY'), '#NekStart\\Ctx\\Submenu')
end