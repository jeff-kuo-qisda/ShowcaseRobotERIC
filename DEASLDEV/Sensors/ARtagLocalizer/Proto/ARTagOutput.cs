
//------------------------------------------------------------------------------
// 
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// 
//------------------------------------------------------------------------------

// Generated from: ARTagOutput.proto
namespace ARTag
{
    [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ARTagMessage")]
    public partial class ARTagMessage : global::ProtoBuf.IExtensible
    {
      public ARTagMessage() {}
      
    private readonly global::System.Collections.Generic.List<ARTag.ARTagMessage.Pose> _oois = new global::System.Collections.Generic.List<ARTag.ARTagMessage.Pose>();
    [global::ProtoBuf.ProtoMember(1, Name=@"oois", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<ARTag.ARTagMessage.Pose> oois
    {
      get { return _oois; }
    }
  
    private uint _camera_id;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"camera_id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public uint camera_id
    {
      get { return _camera_id; }
      set { _camera_id = value; }
    }
    private double _timestamp;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"timestamp", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double timestamp
    {
      get { return _timestamp; }
      set { _timestamp = value; }
    }
    [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"Pose")]
    public partial class Pose : global::ProtoBuf.IExtensible
    {
      public Pose() {}
      
    private int _id;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int id
    {
      get { return _id; }
      set { _id = value; }
    }
    private double _x;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"x", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double x
    {
      get { return _x; }
      set { _x = value; }
    }
    private double _y;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"y", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double y
    {
      get { return _y; }
      set { _y = value; }
    }
    private double _z;
    [global::ProtoBuf.ProtoMember(4, IsRequired = true, Name=@"z", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double z
    {
      get { return _z; }
      set { _z = value; }
    }
    private double _yaw;
    [global::ProtoBuf.ProtoMember(5, IsRequired = true, Name=@"yaw", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double yaw
    {
      get { return _yaw; }
      set { _yaw = value; }
    }
    private double _pitch;
    [global::ProtoBuf.ProtoMember(6, IsRequired = true, Name=@"pitch", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double pitch
    {
      get { return _pitch; }
      set { _pitch = value; }
    }
    private double _roll;
    [global::ProtoBuf.ProtoMember(7, IsRequired = true, Name=@"roll", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double roll
    {
      get { return _roll; }
      set { _roll = value; }
    }
    private double _timestamp;
    [global::ProtoBuf.ProtoMember(8, IsRequired = true, Name=@"timestamp", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double timestamp
    {
      get { return _timestamp; }
      set { _timestamp = value; }
    }
      private global::ProtoBuf.IExtension extensionObject;
      global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
        { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
    }
  
      private global::ProtoBuf.IExtension extensionObject;
      global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
        { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
    }
  
}