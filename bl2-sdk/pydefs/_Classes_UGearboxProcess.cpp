#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxProcess()
{
    class_< UGearboxProcess, bases< UObject >  , boost::noncopyable>("UGearboxProcess", no_init)
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
        .def("StaticClass", &UGearboxProcess::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetStepConfiguration", &UGearboxProcess::GetStepConfiguration)
        .def("GotoStep", &UGearboxProcess::GotoStep)
        .def("GotoNextStep", &UGearboxProcess::GotoNextStep)
        .def("GotoFirstStep", &UGearboxProcess::GotoFirstStep)
        .def("eventPerformStep", &UGearboxProcess::eventPerformStep)
        .def("PauseLoop", &UGearboxProcess::PauseLoop)
        .def("Init", &UGearboxProcess::Init)
        .def("ContinueLoop", &UGearboxProcess::ContinueLoop)
        .def("StopLoop", &UGearboxProcess::StopLoop)
        .staticmethod("StaticClass")
  ;
}