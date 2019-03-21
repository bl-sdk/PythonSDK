#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimMetaData_SkelControlKeyFrame()
{
    class_< UAnimMetaData_SkelControlKeyFrame, bases< UAnimMetaData >  , boost::noncopyable>("UAnimMetaData_SkelControlKeyFrame", no_init)
        .def_readwrite("KeyFrames", &UAnimMetaData_SkelControlKeyFrame::KeyFrames)
        .def_readwrite("SkelControlNameList", &UAnimMetaData_SkelControl::SkelControlNameList)
        .def_readwrite("SkelControlName", &UAnimMetaData_SkelControl::SkelControlName)
        .def("StaticClass", &UAnimMetaData_SkelControlKeyFrame::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}