#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeBlendByAimState()
{
    class_< UWillowAnimNodeBlendByAimState, bases< UAnimNodeBlendList >  , boost::noncopyable>("UWillowAnimNodeBlendByAimState", no_init)
        .def_readwrite("BlendTime", &UWillowAnimNodeBlendByAimState::BlendTime)
        .def("StaticClass", &UWillowAnimNodeBlendByAimState::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}