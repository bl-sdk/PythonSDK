#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowGFxLobbyTools()
{
    class_< UWillowGFxLobbyTools, bases< UObject >  , boost::noncopyable>("UWillowGFxLobbyTools", no_init)
        .def_readwrite("Movie", &UWillowGFxLobbyTools::Movie)
        .def_readwrite("InputMenuTag", &UWillowGFxLobbyTools::InputMenuTag)
        .def_readwrite("InputPlayerID", &UWillowGFxLobbyTools::InputPlayerID)
        .def("StaticClass", &UWillowGFxLobbyTools::StaticClass, return_value_policy< reference_existing_object >())
        .def("FinishInput", &UWillowGFxLobbyTools::FinishInput)
        .def("BeginInputText", &UWillowGFxLobbyTools::BeginInputText)
        .def("AS_SetArgU", &UWillowGFxLobbyTools::AS_SetArgU)
        .def("AS_SetArgB", &UWillowGFxLobbyTools::AS_SetArgB)
        .def("AS_SetArgS", &UWillowGFxLobbyTools::AS_SetArgS)
        .def("AS_SetArgI", &UWillowGFxLobbyTools::AS_SetArgI)
        .def("AS_SetArgF", &UWillowGFxLobbyTools::AS_SetArgF)
        .def("InvokeNoArgs", &UWillowGFxLobbyTools::InvokeNoArgs)
        .def("menuSetValue", &UWillowGFxLobbyTools::menuSetValue)
        .def("menuGetValue", &UWillowGFxLobbyTools::menuGetValue)
        .def("menuAddEditItem", &UWillowGFxLobbyTools::menuAddEditItem)
        .def("menuAddSlider", &UWillowGFxLobbyTools::menuAddSlider)
        .def("menuUpdateSpinner", &UWillowGFxLobbyTools::menuUpdateSpinner)
        .def("menuAddSpinner", &UWillowGFxLobbyTools::menuAddSpinner)
        .def("menuAddCharacterItem", &UWillowGFxLobbyTools::menuAddCharacterItem)
        .def("menuAddItem", &UWillowGFxLobbyTools::menuAddItem)
        .def("menuEnd", &UWillowGFxLobbyTools::menuEnd)
        .def("menuStart", &UWillowGFxLobbyTools::menuStart)
        .def("inNeedsInput", &UWillowGFxLobbyTools::inNeedsInput)
        .def("inSelect", &UWillowGFxLobbyTools::inSelect)
        .def("inBack", &UWillowGFxLobbyTools::inBack)
        .def("inPrev", &UWillowGFxLobbyTools::inPrev)
        .def("inNext", &UWillowGFxLobbyTools::inNext)
        .def("inMinus", &UWillowGFxLobbyTools::inMinus)
        .def("inPlus", &UWillowGFxLobbyTools::inPlus)
        .def("inCloseAllMenus", &UWillowGFxLobbyTools::inCloseAllMenus)
        .def("inFocus", &UWillowGFxLobbyTools::inFocus)
        .def("Init", &UWillowGFxLobbyTools::Init)
        .staticmethod("StaticClass")
  ;
}