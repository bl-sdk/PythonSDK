#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNotify_Trails()
{
    class_< UAnimNotify_Trails, bases< UAnimNotify >  , boost::noncopyable>("UAnimNotify_Trails", no_init)
        .def_readwrite("PSTemplate", &UAnimNotify_Trails::PSTemplate)
        .def_readwrite("FirstEdgeSocketName", &UAnimNotify_Trails::FirstEdgeSocketName)
        .def_readwrite("ControlPointSocketName", &UAnimNotify_Trails::ControlPointSocketName)
        .def_readwrite("SecondEdgeSocketName", &UAnimNotify_Trails::SecondEdgeSocketName)
        .def_readwrite("LastStartTime", &UAnimNotify_Trails::LastStartTime)
        .def_readwrite("EndTime", &UAnimNotify_Trails::EndTime)
        .def_readwrite("SampleTimeStep", &UAnimNotify_Trails::SampleTimeStep)
        .def_readwrite("TrailSampleData", &UAnimNotify_Trails::TrailSampleData)
        .def_readwrite("SamplesPerSecond", &UAnimNotify_Trails::SamplesPerSecond)
        .def_readwrite("TrailSampledData", &UAnimNotify_Trails::TrailSampledData)
        .def_readwrite("CurrentTime", &UAnimNotify_Trails::CurrentTime)
        .def_readwrite("TimeStep", &UAnimNotify_Trails::TimeStep)
        .def_readwrite("AnimNodeSeq", &UAnimNotify_Trails::AnimNodeSeq)
        .def("StaticClass", &UAnimNotify_Trails::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetNumSteps", &UAnimNotify_Trails::GetNumSteps)
        .staticmethod("StaticClass")
  ;
}