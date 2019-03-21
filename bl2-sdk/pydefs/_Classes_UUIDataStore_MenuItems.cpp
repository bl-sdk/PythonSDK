#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataStore_MenuItems()
{
    class_< UUIDataStore_MenuItems, bases< UUIDataStore_GameResource >  , boost::noncopyable>("UUIDataStore_MenuItems", no_init)
        .def_readwrite("CurrentGameSettingsTag", &UUIDataStore_MenuItems::CurrentGameSettingsTag)
        .def_readwrite("OptionProviders", &UUIDataStore_MenuItems::OptionProviders)
        .def_readwrite("DynamicProviders", &UUIDataStore_MenuItems::DynamicProviders)
        .def("StaticClass", &UUIDataStore_MenuItems::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventUnregistered", &UUIDataStore_MenuItems::eventUnregistered)
        .def("eventRegistered", &UUIDataStore_MenuItems::eventRegistered)
        .def("OnGameSettingsChanged", &UUIDataStore_MenuItems::OnGameSettingsChanged)
        .def("GetSet", &UUIDataStore_MenuItems::GetSet)
        .def("AppendToSet", &UUIDataStore_MenuItems::AppendToSet)
        .def("ClearSet", &UUIDataStore_MenuItems::ClearSet)
        .staticmethod("StaticClass")
  ;
}