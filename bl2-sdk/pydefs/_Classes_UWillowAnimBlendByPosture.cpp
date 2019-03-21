#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimBlendByPosture()
{
    class_< UWillowAnimBlendByPosture, bases< UAnimNodeBlendList >  , boost::noncopyable>("UWillowAnimBlendByPosture", no_init)
        .def_readwrite("BlendTime", &UWillowAnimBlendByPosture::BlendTime)
        .def("StaticClass", &UWillowAnimBlendByPosture::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}