#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimSequence()
{
    class_< UAnimSequence, bases< UObject >  , boost::noncopyable>("UAnimSequence", no_init)
        .def_readwrite("SequenceName", &UAnimSequence::SequenceName)
        .def_readwrite("Notifies", &UAnimSequence::Notifies)
        .def_readwrite("MetaData", &UAnimSequence::MetaData)
        .def_readwrite("BoneControlModifiers", &UAnimSequence::BoneControlModifiers)
        .def_readwrite("SequenceLength", &UAnimSequence::SequenceLength)
        .def_readwrite("NumFrames", &UAnimSequence::NumFrames)
        .def_readwrite("RateScale", &UAnimSequence::RateScale)
        .def_readwrite("RawAnimData", &UAnimSequence::RawAnimData)
        .def_readwrite("RawAnimationData", &UAnimSequence::RawAnimationData)
        .def_readwrite("TranslationData", &UAnimSequence::TranslationData)
        .def_readwrite("RotationData", &UAnimSequence::RotationData)
        .def_readwrite("CurveData", &UAnimSequence::CurveData)
        .def_readwrite("TranslationCompressionFormat", &UAnimSequence::TranslationCompressionFormat)
        .def_readwrite("RotationCompressionFormat", &UAnimSequence::RotationCompressionFormat)
        .def_readwrite("KeyEncodingFormat", &UAnimSequence::KeyEncodingFormat)
        .def_readwrite("CompressedTrackOffsets", &UAnimSequence::CompressedTrackOffsets)
        .def_readwrite("CompressedByteStream", &UAnimSequence::CompressedByteStream)
        .def_readwrite("TranslationCodec", &UAnimSequence::TranslationCodec)
        .def_readwrite("RotationCodec", &UAnimSequence::RotationCodec)
        .def_readwrite("AdditiveRefPose", &UAnimSequence::AdditiveRefPose)
        .def_readwrite("AdditiveBasePose", &UAnimSequence::AdditiveBasePose)
        .def_readwrite("EncodingPkgVersion", &UAnimSequence::EncodingPkgVersion)
        .def_readwrite("UseScore", &UAnimSequence::UseScore)
        .def_readwrite("DeltaTrackCache", &UAnimSequence::DeltaTrackCache)
        .def("StaticClass", &UAnimSequence::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetNotifyTimeByClass", &UAnimSequence::GetNotifyTimeByClass)
        .staticmethod("StaticClass")
  ;
}