#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimMetaData_SkelControl()
{
    class_< UAnimMetaData_SkelControl, bases< UAnimMetaData >  , boost::noncopyable>("UAnimMetaData_SkelControl", no_init)
        .def_readwrite("SkelControlNameList", &UAnimMetaData_SkelControl::SkelControlNameList)
        .def_readwrite("SkelControlName", &UAnimMetaData_SkelControl::SkelControlName)
        .def("StaticClass", &UAnimMetaData_SkelControl::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}