#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDialogVar_InstanceData()
{
    class_< UWillowDialogVar_InstanceData, bases< UGearboxDialogVariable >  , boost::noncopyable>("UWillowDialogVar_InstanceData", no_init)
        .def_readwrite("InstanceDataName", &UWillowDialogVar_InstanceData::InstanceDataName)
        .def("StaticClass", &UWillowDialogVar_InstanceData::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}