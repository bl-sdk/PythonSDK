#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxManagerDefinition()
{
    class_< UGFxManagerDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UGFxManagerDefinition", no_init)
        .def_readwrite("ManagerClass", &UGFxManagerDefinition::ManagerClass)
        .def_readwrite("GFxDialogBox", &UGFxManagerDefinition::GFxDialogBox)
        .def_readonly("UnknownData00", &UGFxManagerDefinition::UnknownData00)
        .def_readwrite("InteractionSounds", &UGFxManagerDefinition::InteractionSounds)
        .def("StaticClass", &UGFxManagerDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}