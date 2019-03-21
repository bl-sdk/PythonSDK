#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UExposureUtilityBase()
{
    class_< UExposureUtilityBase, bases< UObject >  , boost::noncopyable>("UExposureUtilityBase", no_init)
        .def_readwrite("ExposureStrategy", &UExposureUtilityBase::ExposureStrategy)
        .def("StaticClass", &UExposureUtilityBase::StaticClass, return_value_policy< reference_existing_object >())
        .def("CalculateVantageToPoint", &UExposureUtilityBase::CalculateVantageToPoint)
        .def("CalculateTargetExposure", &UExposureUtilityBase::CalculateTargetExposure)
        .staticmethod("StaticClass")
  ;
}