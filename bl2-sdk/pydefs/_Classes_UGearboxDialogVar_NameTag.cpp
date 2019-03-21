#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogVar_NameTag()
{
    class_< UGearboxDialogVar_NameTag, bases< UGearboxDialogVariable >  , boost::noncopyable>("UGearboxDialogVar_NameTag", no_init)
        .def_readwrite("NameTag", &UGearboxDialogVar_NameTag::NameTag)
        .def("StaticClass", &UGearboxDialogVar_NameTag::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}