#include "message.h"

void Message_Initialize()
{
    // TODO: Implement Message_Initialize
}

void Message_Debug_RegisterSelectedUnitHotkey(U8 key, Message_Type messageType, LegoObject* argumentObj, U32 arg2, Point2I* opt_position)
{
    // TODO: Implement Message_Debug_RegisterSelectedUnitHotkey
}

B32 Message_AnyUnitSelected()
{
    return FALSE;
}

B32 Message_CopySelectedUnits(lpLegoObject **outUnitsList, U32* outUnitsCount)
{
    // TODO: Implement Message_CopySelectedUnits

    return FALSE;
}

void Message_AddMessageAction(Message_Type messageType, lpLegoObject argument1Obj, U32 argument2, Point2I* opt_blockPos)
{
    // TODO: Implement Message_AddMessageAction
}

lpLegoObject Message_GetPrimarySelectedUnit()
{
    // TODO: Implement Message_GetPrimarySelectedUnit

    return NULL;
}

void Message_PTL_Update()
{
    // TODO: Implement Message_PTL_Update
}
