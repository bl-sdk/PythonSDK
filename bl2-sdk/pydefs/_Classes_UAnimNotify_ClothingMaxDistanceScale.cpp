#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNotify_ClothingMaxDistanceScale()
{
    class_< UAnimNotify_ClothingMaxDistanceScale, bases< UAnimNotify >  , boost::noncopyable>("UAnimNotify_ClothingMaxDistanceScale", no_init)
        .def_readwrite("StartScale", &UAnimNotify_ClothingMaxDistanceScale::StartScale)
        .def_readwrite("EndScale", &UAnimNotify_ClothingMaxDistanceScale::EndScale)
        .def_readwrite("ScaleMode", &UAnimNotify_ClothingMaxDistanceScale::ScaleMode)
        .def_readwrite("Duration", &UAnimNotify_ClothingMaxDistanceScale::Duration)
        .def("StaticClass", &UAnimNotify_ClothingMaxDistanceScale::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}