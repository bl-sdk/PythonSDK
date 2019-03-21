#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AMatineeActor()
{
    class_< AMatineeActor, bases< AActor >  , boost::noncopyable>("AMatineeActor", no_init)
        .def_readwrite("InterpAction", &AMatineeActor::InterpAction)
        .def_readwrite("PlayRate", &AMatineeActor::PlayRate)
        .def_readwrite("Position", &AMatineeActor::Position)
        .def_readonly("AIGroupNames", &AMatineeActor::AIGroupNames)
        .def_readonly("AIGroupPawns", &AMatineeActor::AIGroupPawns)
        .def_readonly("AIGroupInitStage", &AMatineeActor::AIGroupInitStage)
        .def_readwrite("ClientSidePositionErrorTolerance", &AMatineeActor::ClientSidePositionErrorTolerance)
        .def("StaticClass", &AMatineeActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("CheckPriorityRefresh", &AMatineeActor::CheckPriorityRefresh)
        .def("eventUpdate", &AMatineeActor::eventUpdate)
        .def("AddAIGroupActor", &AMatineeActor::AddAIGroupActor)
        .staticmethod("StaticClass")
  ;
}