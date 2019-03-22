#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_Trails(py::module &m)
{
    py::class_< UAnimNotify_Trails,  UAnimNotify   >(m, "UAnimNotify_Trails")
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
        .def("StaticClass", &UAnimNotify_Trails::StaticClass, py::return_value_policy::reference)
        .def("GetNumSteps", &UAnimNotify_Trails::GetNumSteps)
          ;
}