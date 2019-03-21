#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqVar_ObjectVolume()
{
    class_< USeqVar_ObjectVolume, bases< USeqVar_Object >  , boost::noncopyable>("USeqVar_ObjectVolume", no_init)
        .def_readwrite("LastUpdateTime", &USeqVar_ObjectVolume::LastUpdateTime)
        .def_readwrite("ContainedObjects", &USeqVar_ObjectVolume::ContainedObjects)
        .def_readwrite("ExcludeClassList", &USeqVar_ObjectVolume::ExcludeClassList)
        .def("StaticClass", &USeqVar_ObjectVolume::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}