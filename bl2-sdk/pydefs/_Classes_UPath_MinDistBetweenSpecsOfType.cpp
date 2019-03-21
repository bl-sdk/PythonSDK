#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPath_MinDistBetweenSpecsOfType()
{
    class_< UPath_MinDistBetweenSpecsOfType, bases< UPathConstraint >  , boost::noncopyable>("UPath_MinDistBetweenSpecsOfType", no_init)
        .def_readwrite("MinDistBetweenSpecTypes", &UPath_MinDistBetweenSpecsOfType::MinDistBetweenSpecTypes)
        .def_readwrite("InitLocation", &UPath_MinDistBetweenSpecsOfType::InitLocation)
        .def_readwrite("ReachSpecClass", &UPath_MinDistBetweenSpecsOfType::ReachSpecClass)
        .def("StaticClass", &UPath_MinDistBetweenSpecsOfType::StaticClass, return_value_policy< reference_existing_object >())
        .def("Recycle", &UPath_MinDistBetweenSpecsOfType::Recycle)
        .def("EnforceMinDist", &UPath_MinDistBetweenSpecsOfType::EnforceMinDist)
        .staticmethod("StaticClass")
  ;
}