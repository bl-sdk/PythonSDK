#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogNameTag()
{
    class_< UGearboxDialogNameTag, bases< UGBXDefinition >  , boost::noncopyable>("UGearboxDialogNameTag", no_init)
        .def_readwrite("NameTag", &UGearboxDialogNameTag::NameTag)
        .def_readwrite("ParentTag", &UGearboxDialogNameTag::ParentTag)
        .def("StaticClass", &UGearboxDialogNameTag::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}