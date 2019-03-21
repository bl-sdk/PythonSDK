#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNodeCrossfader()
{
    class_< UAnimNodeCrossfader, bases< UAnimNodeBlend >  , boost::noncopyable>("UAnimNodeCrossfader", no_init)
        .def_readwrite("DefaultAnimSeqName", &UAnimNodeCrossfader::DefaultAnimSeqName)
        .def_readwrite("PendingBlendOutTimeOneShot", &UAnimNodeCrossfader::PendingBlendOutTimeOneShot)
        .def("StaticClass", &UAnimNodeCrossfader::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetActiveChild", &UAnimNodeCrossfader::GetActiveChild, return_value_policy< reference_existing_object >())
        .def("GetAnimName", &UAnimNodeCrossfader::GetAnimName)
        .def("BlendToLoopingAnim", &UAnimNodeCrossfader::BlendToLoopingAnim)
        .def("PlayOneShotAnim", &UAnimNodeCrossfader::PlayOneShotAnim)
        .staticmethod("StaticClass")
  ;
}