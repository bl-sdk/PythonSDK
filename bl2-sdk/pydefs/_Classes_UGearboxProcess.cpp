#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxProcess(py::module &m)
{
    py::class_< UGearboxProcess,  UObject   >(m, "UGearboxProcess")
        .def_readwrite("FirstAttemptDelay", &UGearboxProcess::FirstAttemptDelay)
        .def_readwrite("BaseRetrySeconds", &UGearboxProcess::BaseRetrySeconds)
        .def_readwrite("MaxRetryAttempts", &UGearboxProcess::MaxRetryAttempts)
        .def_readwrite("RetryMultiplier", &UGearboxProcess::RetryMultiplier)
        .def_readwrite("RetryJitter", &UGearboxProcess::RetryJitter)
        .def_readwrite("CurrentRetrySeconds", &UGearboxProcess::CurrentRetrySeconds)
        .def_readwrite("Attempts", &UGearboxProcess::Attempts)
        .def_readwrite("WaitTime", &UGearboxProcess::WaitTime)
        .def_readwrite("CurrentStep", &UGearboxProcess::CurrentStep)
        .def_readwrite("FailureStep", &UGearboxProcess::FailureStep)
        .def("StaticClass", &UGearboxProcess::StaticClass, py::return_value_policy::reference)
        .def("GetStepConfiguration", &UGearboxProcess::GetStepConfiguration)
        .def("GotoStep", &UGearboxProcess::GotoStep)
        .def("GotoNextStep", &UGearboxProcess::GotoNextStep)
        .def("GotoFirstStep", &UGearboxProcess::GotoFirstStep)
        .def("eventPerformStep", &UGearboxProcess::eventPerformStep)
        .def("PauseLoop", &UGearboxProcess::PauseLoop)
        .def("Init", &UGearboxProcess::Init)
        .def("ContinueLoop", &UGearboxProcess::ContinueLoop)
        .def("StopLoop", &UGearboxProcess::StopLoop)
          ;
}