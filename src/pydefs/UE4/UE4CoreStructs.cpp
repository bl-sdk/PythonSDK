#include "stdafx.h"
#include <UnrealEngine\Core\UE3\Core_structs.h>

#ifdef UE4
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_Core_structs(py::module& m)
{
	py::class_< FRotator >(m, "FRotator")
		.def(py::init<>())
		.def_readwrite("Pitch", &FRotator::Pitch)
		.def_readwrite("Yaw", &FRotator::Yaw)
		.def_readwrite("Roll", &FRotator::Roll);

	py::class_< FVector2D >(m, "FVector2D")
		.def(py::init<>())
		.def_readwrite("X", &FVector2D::X)
		.def_readwrite("Y", &FVector2D::Y);

	py::class_< FVector >(m, "FVector")
		.def(py::init<>())
		.def_readwrite("X", &FVector::X)
		.def_readwrite("Y", &FVector::Y)
		.def_readwrite("Z", &FVector::Z);

	py::class_< FGuid >(m, "FGuid")
		.def(py::init<>())
		.def_readwrite("A", &FGuid::A)
		.def_readwrite("B", &FGuid::B)
		.def_readwrite("C", &FGuid::C)
		.def_readwrite("D", &FGuid::D);

	py::class_< FVector4 >(m, "FVector4")
		.def(py::init<>())
		.def_readwrite("X", &FVector4::X)
		.def_readwrite("Y", &FVector4::Y)
		.def_readwrite("Z", &FVector4::Z)
		.def_readwrite("W", &FVector4::W);

	py::class_< FQuat >(m, "FQuat")
		.def(py::init<>())
		.def_readwrite("X", &FQuat::X)
		.def_readwrite("Y", &FQuat::Y)
		.def_readwrite("Z", &FQuat::Z)
		.def_readwrite("W", &FQuat::W);

	py::class_< FLinearColor >(m, "FLinearColor")
		.def(py::init<>())
		.def_readwrite("R", &FLinearColor::R)
		.def_readwrite("G", &FLinearColor::G)
		.def_readwrite("B", &FLinearColor::B)
		.def_readwrite("A", &FLinearColor::A);

	py::class_< FColor >(m, "FColor")
		.def(py::init<>())
		.def_readwrite("B", &FColor::B)
		.def_readwrite("G", &FColor::G)
		.def_readwrite("R", &FColor::R)
		.def_readwrite("A", &FColor::A);

	py::class_< FInterpCurvePointVector2D >(m, "FInterpCurvePointVector2D")
		.def(py::init<>())
		.def_readwrite("InVal", &FInterpCurvePointVector2D::InVal)
		.def_readwrite("OutVal", &FInterpCurvePointVector2D::OutVal, py::return_value_policy::reference)
		.def_readwrite("ArriveTangent", &FInterpCurvePointVector2D::ArriveTangent, py::return_value_policy::reference)
		.def_readwrite("LeaveTangent", &FInterpCurvePointVector2D::LeaveTangent, py::return_value_policy::reference)
		.def_readwrite("InterpMode", &FInterpCurvePointVector2D::InterpMode);

	py::class_< FInterpCurveVector2D >(m, "FInterpCurveVector2D")
		.def(py::init<>())
		.def_readwrite("Points", &FInterpCurveVector2D::Points, py::return_value_policy::reference);

	py::class_< FInterpCurvePointFloat >(m, "FInterpCurvePointFloat")
		.def(py::init<>())
		.def_readwrite("InVal", &FInterpCurvePointFloat::InVal)
		.def_readwrite("OutVal", &FInterpCurvePointFloat::OutVal)
		.def_readwrite("ArriveTangent", &FInterpCurvePointFloat::ArriveTangent)
		.def_readwrite("LeaveTangent", &FInterpCurvePointFloat::LeaveTangent)
		.def_readwrite("InterpMode", &FInterpCurvePointFloat::InterpMode);

	py::class_< FInterpCurveFloat >(m, "FInterpCurveFloat")
		.def(py::init<>())
		.def_readwrite("Points", &FInterpCurveFloat::Points, py::return_value_policy::reference);

	py::class_< FInterpCurvePointVector >(m, "FInterpCurvePointVector")
		.def(py::init<>())
		.def_readwrite("InVal", &FInterpCurvePointVector::InVal)
		.def_readwrite("OutVal", &FInterpCurvePointVector::OutVal, py::return_value_policy::reference)
		.def_readwrite("ArriveTangent", &FInterpCurvePointVector::ArriveTangent, py::return_value_policy::reference)
		.def_readwrite("LeaveTangent", &FInterpCurvePointVector::LeaveTangent, py::return_value_policy::reference)
		.def_readwrite("InterpMode", &FInterpCurvePointVector::InterpMode);

	py::class_< FInterpCurveVector >(m, "FInterpCurveVector")
		.def(py::init<>())
		.def_readwrite("Points", &FInterpCurveVector::Points, py::return_value_policy::reference);
	py::class_< FPlane, FVector >(m, "FPlane")
		.def(py::init<>())
		.def_readwrite("W", &FPlane::W);

	py::class_< FMatrix >(m, "FMatrix")
		.def(py::init<>())
		.def_readwrite("XPlane", &FMatrix::XPlane, py::return_value_policy::reference)
		.def_readwrite("YPlane", &FMatrix::YPlane, py::return_value_policy::reference)
		.def_readwrite("ZPlane", &FMatrix::ZPlane, py::return_value_policy::reference)
		.def_readwrite("WPlane", &FMatrix::WPlane, py::return_value_policy::reference);

	py::class_< FBoxSphereBounds >(m, "FBoxSphereBounds")
		.def(py::init<>())
		.def_readwrite("Origin", &FBoxSphereBounds::Origin, py::return_value_policy::reference)
		.def_readwrite("BoxExtent", &FBoxSphereBounds::BoxExtent, py::return_value_policy::reference)
		.def_readwrite("SphereRadius", &FBoxSphereBounds::SphereRadius);

	py::class_< FTwoVectors >(m, "FTwoVectors")
		.def(py::init<>())
		.def_readwrite("v1", &FTwoVectors::v1, py::return_value_policy::reference)
		.def_readwrite("v2", &FTwoVectors::v2, py::return_value_policy::reference);


	py::class_< FPointer >(m, "FPointer")
		.def(py::init<>())
		.def_readwrite("Dummy", &FPointer::Dummy);


	py::class_< FRawDistribution >(m, "FRawDistribution")
		.def(py::init<>())
		.def_readwrite("Table", &FRawDistribution::Table);

	py::class_< FInterpCurvePointLinearColor >(m, "FInterpCurvePointLinearColor")
		.def(py::init<>())
		.def_readwrite("InVal", &FInterpCurvePointLinearColor::InVal)
		.def_readwrite("OutVal", &FInterpCurvePointLinearColor::OutVal, py::return_value_policy::reference)
		.def_readwrite("ArriveTangent", &FInterpCurvePointLinearColor::ArriveTangent, py::return_value_policy::reference)
		.def_readwrite("LeaveTangent", &FInterpCurvePointLinearColor::LeaveTangent, py::return_value_policy::reference)
		.def_readwrite("InterpMode", &FInterpCurvePointLinearColor::InterpMode);

	py::class_< FInterpCurveLinearColor >(m, "FInterpCurveLinearColor")
		.def(py::init<>())
		.def_readwrite("Points", &FInterpCurveLinearColor::Points, py::return_value_policy::reference);

	py::class_< FInterpCurvePointQuat >(m, "FInterpCurvePointQuat")
		.def(py::init<>())
		.def_readwrite("InVal", &FInterpCurvePointQuat::InVal)
		.def_readwrite("OutVal", &FInterpCurvePointQuat::OutVal, py::return_value_policy::reference)
		.def_readwrite("ArriveTangent", &FInterpCurvePointQuat::ArriveTangent, py::return_value_policy::reference)
		.def_readwrite("LeaveTangent", &FInterpCurvePointQuat::LeaveTangent, py::return_value_policy::reference)
		.def_readwrite("InterpMode", &FInterpCurvePointQuat::InterpMode);

	py::class_< FInterpCurveQuat >(m, "FInterpCurveQuat")
		.def(py::init<>())
		.def_readwrite("Points", &FInterpCurveQuat::Points, py::return_value_policy::reference);

	py::class_< FInterpCurvePointTwoVectors >(m, "FInterpCurvePointTwoVectors")
		.def(py::init<>())
		.def_readwrite("InVal", &FInterpCurvePointTwoVectors::InVal)
		.def_readwrite("OutVal", &FInterpCurvePointTwoVectors::OutVal, py::return_value_policy::reference)
		.def_readwrite("ArriveTangent", &FInterpCurvePointTwoVectors::ArriveTangent, py::return_value_policy::reference)
		.def_readwrite("LeaveTangent", &FInterpCurvePointTwoVectors::LeaveTangent, py::return_value_policy::reference)
		.def_readwrite("InterpMode", &FInterpCurvePointTwoVectors::InterpMode);

	py::class_< FInterpCurveTwoVectors >(m, "FInterpCurveTwoVectors")
		.def(py::init<>())
		.def_readwrite("Points", &FInterpCurveTwoVectors::Points, py::return_value_policy::reference);

	py::class_< FIntPoint >(m, "FIntPoint")
		.def(py::init<>())
		.def_readwrite("X", &FIntPoint::X)
		.def_readwrite("Y", &FIntPoint::Y);

	py::class_< FPackedNormal >(m, "FPackedNormal")
		.def(py::init<>())
		.def_readwrite("X", &FPackedNormal::X)
		.def_readwrite("Y", &FPackedNormal::Y)
		.def_readwrite("Z", &FPackedNormal::Z)
		.def_readwrite("W", &FPackedNormal::W);

	py::class_< FRawDistributionFloat, FRawDistribution >(m, "FRawDistributionFloat")
		.def(py::init<>())
		.def_readwrite("Distribution", &FRawDistributionFloat::Distribution, py::return_value_policy::reference);

	py::class_< FRawDistributionVector, FRawDistribution >(m, "FRawDistributionVector")
		.def(py::init<>())
		.def_readwrite("Distribution", &FRawDistributionVector::Distribution, py::return_value_policy::reference);


}

#endif